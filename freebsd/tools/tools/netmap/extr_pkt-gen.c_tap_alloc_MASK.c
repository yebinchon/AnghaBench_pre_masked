
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_flags; int ifr_name; } ;
typedef int ifr ;
typedef int buf ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (int,int ,void*) ;
 int FUNC_3 (int ,char*,size_t) ;
 int FUNC_4 (struct ifreq*,int ,int) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int,char*,char*) ;
 int FUNC_7 (char*,int ) ;
 char* FUNC_8 (int ) ;
 size_t FUNC_9 (char*) ;

__attribute__((used)) static int
FUNC_10(char *VAR_7)
{
 struct ifreq VAR_8;
 int VAR_9, VAR_10;
 char *VAR_11 = VAR_4;

 (void)VAR_10;
 (void)VAR_7;
 if( (VAR_9 = FUNC_5(VAR_11, VAR_3)) < 0 ) {
  return VAR_9;
 }
 FUNC_0("%s open successful", VAR_11);


 FUNC_4(&VAR_8, 0, sizeof(VAR_8));


 VAR_8.ifr_flags = VAR_1 | VAR_0;

 if (*VAR_7) {



  size_t VAR_12 = FUNC_9(VAR_7);
  if (VAR_12 > VAR_2) {
   FUNC_0("%s too long", VAR_7);
   return -1;
  }
  FUNC_3(VAR_8.ifr_name, VAR_7, VAR_12);
 }


 if( (VAR_10 = FUNC_2(VAR_9, VAR_5, (void *) &VAR_8)) < 0 ) {
  FUNC_0("failed to to a TUNSETIFF: %s", FUNC_8(VAR_6));
  FUNC_1(VAR_9);
  return VAR_10;
 }





 FUNC_7(VAR_7, VAR_8.ifr_name);
 FUNC_0("new name is %s", VAR_7);




 return VAR_9;
}
