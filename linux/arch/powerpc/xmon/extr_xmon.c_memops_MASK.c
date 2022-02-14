
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,unsigned char*,int ,int ) ;
 int FUNC_1 (void*,void*,int ) ;
 int FUNC_2 (void*,scalar_t__,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (void*) ;
 char VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;

__attribute__((used)) static void
FUNC_5(int VAR_8)
{
 FUNC_4((void *)&VAR_1);
 if( VAR_5 != '\n' )
  VAR_5 = 0;
 FUNC_4((void *)(VAR_8 == 's'? &VAR_4: &VAR_3));
 if( VAR_5 != '\n' )
  VAR_5 = 0;
 FUNC_4((void *)&VAR_0);
 switch( VAR_8 ){
 case 'm':
  if (VAR_6) {
   FUNC_3(VAR_7);
   break;
  }
  FUNC_1((void *)VAR_1, (void *)VAR_3, VAR_0);
  break;
 case 's':
  if (VAR_6) {
   FUNC_3(VAR_7);
   break;
  }
  FUNC_2((void *)VAR_1, VAR_4, VAR_0);
  break;
 case 'd':
  if( VAR_5 != '\n' )
   VAR_5 = 0;
  FUNC_4((void *)&VAR_2);
  FUNC_0((unsigned char *)VAR_1, (unsigned char *)VAR_3, VAR_0, VAR_2);
  break;
 }
}
