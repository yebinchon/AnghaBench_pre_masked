
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (char*,unsigned long,unsigned long,int ) ;
 int FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (char const*,char*,unsigned long*,unsigned long*) ;
 scalar_t__ FUNC_6 (char const*,char) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(const char *VAR_5, const struct kernel_param *VAR_6)
{
 int VAR_7;
 unsigned long VAR_8, VAR_9;

 if (!FUNC_0())
  return -VAR_4;
 if (!VAR_5 || !FUNC_7(VAR_5))
  return -VAR_3;


 VAR_8 = VAR_1;
 VAR_9 = VAR_0;
 if (FUNC_6(VAR_5, ','))
  VAR_7 = (FUNC_5(VAR_5, "%lu,%lu", &VAR_8, &VAR_9) == 2) ? 0 : -VAR_3;
 else
  VAR_7 = FUNC_2(VAR_5, 10, &VAR_9);

 if (VAR_8 < 2 || VAR_8 >= VAR_9 || VAR_9 > FUNC_1())
  VAR_7 = -VAR_3;
 if (VAR_7)
  return VAR_7;

 FUNC_4(VAR_8, VAR_9);
 FUNC_3("The sampling buffer limits have changed to: "
  "min=%lu max=%lu (diag=x%lu)\n",
  VAR_1, VAR_0, VAR_2);
 return 0;
}
