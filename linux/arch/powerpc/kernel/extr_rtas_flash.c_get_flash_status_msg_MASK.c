
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,size_t) ;
 size_t FUNC_1 (char*,char*,int) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static size_t FUNC_3(int VAR_0, char *VAR_1)
{
 const char *VAR_2;
 size_t VAR_3;

 switch (VAR_0) {
 case 133:
  VAR_2 = "error: this partition does not have service authority\n";
  break;
 case 128:
  VAR_2 = "info: no firmware image for flash\n";
  break;
 case 129:
  VAR_2 = "error: flash image short\n";
  break;
 case 132:
  VAR_2 = "error: internal error bad length\n";
  break;
 case 131:
  VAR_2 = "error: internal error null data\n";
  break;
 case 130:
  VAR_2 = "ready: firmware image ready for flash on reboot\n";
  break;
 default:
  return FUNC_1(VAR_1, "error: unexpected status value %d\n",
          VAR_0);
 }

 VAR_3 = FUNC_2(VAR_2);
 FUNC_0(VAR_1, VAR_2, VAR_3 + 1);
 return VAR_3;
}
