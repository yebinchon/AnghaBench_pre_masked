
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,...) ;

int FUNC_5( int VAR_2, const char* VAR_3[])
{
    if(VAR_2 != 3){
      FUNC_4("usage: %s [c | d] wtap_id\n", VAR_3[0]);
      return -1;
    }
    int VAR_4 = FUNC_0(VAR_3[2]);
    if(!(VAR_4 >= 0 && VAR_4 < 64)){
 FUNC_4("wtap_id must be between 0 and 7\n");
 return -1;
    }
    VAR_1 = FUNC_3("/dev/wtapctl", VAR_0);
    if(VAR_1 < 0){
      FUNC_4("error opening wtapctl cdev\n");
      return -1;
    }
    switch((char)*VAR_3[1]){
      case 'c':
 FUNC_1(VAR_4);
 break;
      case 'd':
 FUNC_2(VAR_4);
 break;
      default:
 FUNC_4("wtap ioctl: unknown command '%c'\n", *VAR_3[1]);
 return -1;
    }
    return 0;
}
