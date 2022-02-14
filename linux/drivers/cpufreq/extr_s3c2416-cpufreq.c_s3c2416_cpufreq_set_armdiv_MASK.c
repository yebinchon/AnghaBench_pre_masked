
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2416_data {int armdiv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (char*,unsigned int,int) ;

__attribute__((used)) static int FUNC_3(struct s3c2416_data *VAR_0,
          unsigned int VAR_1)
{
 int VAR_2;

 if (FUNC_0(VAR_0->armdiv) / 1000 != VAR_1) {
  VAR_2 = FUNC_1(VAR_0->armdiv, VAR_1 * 1000);
  if (VAR_2 < 0) {
   FUNC_2("cpufreq: Failed to set armdiv rate %dkHz: %d\n",
          VAR_1, VAR_2);
   return VAR_2;
  }
 }

 return 0;
}
