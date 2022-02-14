
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct i2c_client {int dummy; } ;
struct edt_ft5x06_ts_data {char* name; void* version; } ;
typedef int rdbuf ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (struct i2c_client*,int,char*,int,char*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,int,char*,...) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_6,
     struct edt_ft5x06_ts_data *VAR_7,
     char *VAR_8)
{
 u8 VAR_9[VAR_3];
 char *VAR_10;
 int VAR_11;
 char *VAR_12 = VAR_7->name;





 FUNC_1(VAR_9, 0, sizeof(VAR_9));
 VAR_11 = FUNC_0(VAR_6, 1, "\xBB",
     VAR_3 - 1, VAR_9);
 if (VAR_11)
  return VAR_11;





 if (!FUNC_5(VAR_9 + 1, "EP0", 3)) {
  VAR_7->version = VAR_0;


  VAR_9[VAR_3 - 1] = '\0';
  if (VAR_9[VAR_3 - 2] == '$')
   VAR_9[VAR_3 - 2] = '\0';


  VAR_10 = FUNC_3(VAR_9, '*');
  if (VAR_10)
   *VAR_10++ = '\0';
  FUNC_4(VAR_12, VAR_9 + 1, VAR_3);
  FUNC_4(VAR_8, VAR_10 ? VAR_10 : "", VAR_3);
 } else if (!FUNC_5(VAR_9, "EP0", 3)) {
  VAR_7->version = VAR_2;


  VAR_9[VAR_3 - 2] = '\0';
  if (VAR_9[VAR_3 - 3] == '$')
   VAR_9[VAR_3 - 3] = '\0';


  VAR_10 = FUNC_3(VAR_9, '*');
  if (VAR_10)
   *VAR_10++ = '\0';
  FUNC_4(VAR_12, VAR_9, VAR_3);
  FUNC_4(VAR_8, VAR_10 ? VAR_10 : "", VAR_3);
 } else {
  VAR_7->version = VAR_5;

  VAR_11 = FUNC_0(VAR_6, 1, "\xA6",
      2, VAR_9);
  if (VAR_11)
   return VAR_11;

  FUNC_4(VAR_8, VAR_9, 2);

  VAR_11 = FUNC_0(VAR_6, 1, "\xA8",
      1, VAR_9);
  if (VAR_11)
   return VAR_11;





  switch (VAR_9[0]) {
  case 0x35:
  case 0x43:
  case 0x50:
  case 0x57:
  case 0x70:
   VAR_7->version = VAR_1;
   FUNC_2(VAR_12, VAR_3, "EP0%i%i0M09",
    VAR_9[0] >> 4, VAR_9[0] & 0x0F);
   break;
  case 0xa1:
   VAR_7->version = VAR_1;
   FUNC_2(VAR_12, VAR_3, "EP%i%i0ML00",
    VAR_9[0] >> 4, VAR_9[0] & 0x0F);
   break;
  case 0x5a:
   FUNC_2(VAR_12, VAR_3, "GKTW50SCED1R0");
   break;
  case 0x59:
   VAR_7->version = VAR_4;
   VAR_11 = FUNC_0(VAR_6, 1, "\x53",
       1, VAR_9);
   if (VAR_11)
    return VAR_11;
   FUNC_4(VAR_8, VAR_9, 1);
   FUNC_2(VAR_12, VAR_3,
     "EVERVISION-FT5726NEi");
   break;
  default:
   FUNC_2(VAR_12, VAR_3,
     "generic ft5x06 (%02x)",
     VAR_9[0]);
   break;
  }
 }

 return 0;
}
