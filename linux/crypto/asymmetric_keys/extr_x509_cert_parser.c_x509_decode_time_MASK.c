
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (unsigned char const*) ;
 int VAR_2 ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (char*,unsigned char,int,unsigned char const*) ;

int FUNC_3(time64_t *VAR_3, size_t VAR_4,
       unsigned char VAR_5,
       const unsigned char *VAR_6, size_t VAR_7)
{
 static const unsigned char VAR_8[] = { 31, 28, 31, 30, 31, 30,
             31, 31, 30, 31, 30, 31 };
 const unsigned char *VAR_9 = VAR_6;
 unsigned VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;




 if (VAR_5 == VAR_1) {

  if (VAR_7 != 13)
   goto unsupported_time;
  VAR_10 = ({ unsigned VAR_17 = ({ unsigned char VAR_18 = (VAR_9[0]) - '0'; if (VAR_18 > 9) goto invalid_time; VAR_18; }) * 10 + ({ unsigned char VAR_19 = (VAR_9[1]) - '0'; if (VAR_19 > 9) goto invalid_time; VAR_19; }); VAR_9 += 2; VAR_17; });
  if (VAR_10 >= 50)
   VAR_10 += 1900;
  else
   VAR_10 += 2000;
 } else if (VAR_5 == VAR_0) {

  if (VAR_7 != 15)
   goto unsupported_time;
  VAR_10 = ({ unsigned VAR_20 = ({ unsigned char VAR_21 = (VAR_9[0]) - '0'; if (VAR_21 > 9) goto invalid_time; VAR_21; }) * 10 + ({ unsigned char VAR_22 = (VAR_9[1]) - '0'; if (VAR_22 > 9) goto invalid_time; VAR_22; }); VAR_9 += 2; VAR_20; }) * 100 + ({ unsigned VAR_23 = ({ unsigned char VAR_24 = (VAR_9[0]) - '0'; if (VAR_24 > 9) goto invalid_time; VAR_24; }) * 10 + ({ unsigned char VAR_25 = (VAR_9[1]) - '0'; if (VAR_25 > 9) goto invalid_time; VAR_25; }); VAR_9 += 2; VAR_23; });
  if (VAR_10 >= 1950 && VAR_10 <= 2049)
   goto invalid_time;
 } else {
  goto unsupported_time;
 }

 VAR_11 = ({ unsigned VAR_26 = ({ unsigned char VAR_27 = (VAR_9[0]) - '0'; if (VAR_27 > 9) goto invalid_time; VAR_27; }) * 10 + ({ unsigned char VAR_28 = (VAR_9[1]) - '0'; if (VAR_28 > 9) goto invalid_time; VAR_28; }); VAR_9 += 2; VAR_26; });
 VAR_12 = ({ unsigned VAR_29 = ({ unsigned char VAR_30 = (VAR_9[0]) - '0'; if (VAR_30 > 9) goto invalid_time; VAR_30; }) * 10 + ({ unsigned char VAR_31 = (VAR_9[1]) - '0'; if (VAR_31 > 9) goto invalid_time; VAR_31; }); VAR_9 += 2; VAR_29; });
 VAR_13 = ({ unsigned VAR_32 = ({ unsigned char VAR_33 = (VAR_9[0]) - '0'; if (VAR_33 > 9) goto invalid_time; VAR_33; }) * 10 + ({ unsigned char VAR_34 = (VAR_9[1]) - '0'; if (VAR_34 > 9) goto invalid_time; VAR_34; }); VAR_9 += 2; VAR_32; });
 VAR_14 = ({ unsigned VAR_35 = ({ unsigned char VAR_36 = (VAR_9[0]) - '0'; if (VAR_36 > 9) goto invalid_time; VAR_36; }) * 10 + ({ unsigned char VAR_37 = (VAR_9[1]) - '0'; if (VAR_37 > 9) goto invalid_time; VAR_37; }); VAR_9 += 2; VAR_35; });
 VAR_15 = ({ unsigned VAR_38 = ({ unsigned char VAR_39 = (VAR_9[0]) - '0'; if (VAR_39 > 9) goto invalid_time; VAR_39; }) * 10 + ({ unsigned char VAR_40 = (VAR_9[1]) - '0'; if (VAR_40 > 9) goto invalid_time; VAR_40; }); VAR_9 += 2; VAR_38; });

 if (*VAR_9 != 'Z')
  goto unsupported_time;

 if (VAR_10 < 1970 ||
     VAR_11 < 1 || VAR_11 > 12)
  goto invalid_time;

 VAR_16 = VAR_8[VAR_11 - 1];
 if (VAR_11 == 2) {
  if (VAR_10 % 4 == 0) {
   VAR_16 = 29;
   if (VAR_10 % 100 == 0) {
    VAR_16 = 28;
    if (VAR_10 % 400 == 0)
     VAR_16 = 29;
   }
  }
 }

 if (VAR_12 < 1 || VAR_12 > VAR_16 ||
     VAR_13 > 24 ||
     VAR_14 > 59 ||
     VAR_15 > 60)
  goto invalid_time;

 *VAR_3 = FUNC_1(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);
 return 0;

unsupported_time:
 FUNC_2("Got unsupported time [tag %02x]: '%*phN'\n",
   VAR_5, (int)VAR_7, VAR_6);
 return -VAR_2;
invalid_time:
 FUNC_2("Got invalid time [tag %02x]: '%*phN'\n",
   VAR_5, (int)VAR_7, VAR_6);
 return -VAR_2;
}
