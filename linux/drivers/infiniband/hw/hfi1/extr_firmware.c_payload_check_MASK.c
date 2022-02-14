
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hfi1_devdata*,char*,char const*,long,long) ;

__attribute__((used)) static int FUNC_1(struct hfi1_devdata *VAR_1, const char *VAR_2,
    long VAR_3, long VAR_4)
{

 if (VAR_4 >= VAR_3) {
  FUNC_0(VAR_1,
      "firmware \"%s\", size %ld, must be larger than %ld bytes\n",
      VAR_2, VAR_3, VAR_4);
  return -VAR_0;
 }

 return 0;
}
