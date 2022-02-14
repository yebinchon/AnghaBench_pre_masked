
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct camdd_io_opts {scalar_t__ dev_type; } ;
typedef int camdd_argmask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct camdd_io_opts* FUNC_0 (int,int) ;
 int FUNC_1 (int ,int,struct camdd_io_opts*) ;
 int FUNC_2 (struct camdd_io_opts*,int,int ,int,int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct camdd_io_opts*) ;
 int FUNC_7 (int,char**,char*) ;
 int VAR_7 ;
 int FUNC_8 (int ,int *,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,...) ;

int
FUNC_11(int VAR_8, char **VAR_9)
{
 int VAR_10;
 camdd_argmask VAR_11 = VAR_1;
 int VAR_12 = 0, VAR_13 = 1;
 int VAR_14 = 0;
 uint64_t VAR_15 = 0;
 struct camdd_io_opts *VAR_16 = ((void*)0);

 if (VAR_8 == 1) {
  FUNC_9();
  FUNC_4(1);
 }

 VAR_16 = FUNC_0(2, sizeof(struct camdd_io_opts));
 if (VAR_16 == ((void*)0)) {
  FUNC_10("Unable to allocate option list");
  VAR_14 = 1;
  goto bailout;
 }

 while ((VAR_10 = FUNC_7(VAR_8, VAR_9, "C:Ehi:m:o:t:v")) != -1){
  switch (VAR_10) {
  case 'C':
   VAR_13 = FUNC_8(VAR_7, ((void*)0), 0);
   if (VAR_13 < 0)
    FUNC_3(1, "retry count %d is < 0",
         VAR_13);
   VAR_11 |= VAR_2;
   break;
  case 'E':
   VAR_11 |= VAR_0;
   break;
  case 'i':
  case 'o':
   if (((VAR_10 == 'i')
     && (VAR_16[0].dev_type != VAR_5))
    || ((VAR_10 == 'o')
     && (VAR_16[1].dev_type != VAR_5))) {
    FUNC_3(1, "Only one input and output path "
        "allowed");
   }
   VAR_14 = FUNC_1(VAR_7, (VAR_10 == 'o') ? 1 : 0,
       (VAR_10 == 'o') ? &VAR_16[1] : &VAR_16[0]);
   if (VAR_14 != 0)
    goto bailout;
   break;
  case 'm':
   VAR_14 = FUNC_5(VAR_7, &VAR_15);
   if (VAR_14 == -1) {
    FUNC_10("invalid maximum I/O amount %s", VAR_7);
    VAR_14 = 1;
    goto bailout;
   }
   break;
  case 't':
   VAR_12 = FUNC_8(VAR_7, ((void*)0), 0);
   if (VAR_12 < 0)
    FUNC_3(1, "invalid timeout %d", VAR_12);

   VAR_12 *= 1000;
   VAR_11 |= VAR_3;
   break;
  case 'v':
   VAR_11 |= VAR_4;
   break;
  case 'h':
  default:
   FUNC_9();
   FUNC_4(1);
   break;
  }
 }

 if ((VAR_16[0].dev_type == VAR_5)
  || (VAR_16[1].dev_type == VAR_5))
  FUNC_3(1, "Must specify both -i and -o");




 if (VAR_12 == 0)
  VAR_12 = VAR_6;

 VAR_14 = FUNC_2(VAR_16, 2, VAR_15, VAR_13, VAR_12);

bailout:
 FUNC_6(VAR_16);

 FUNC_4(VAR_14);
}
