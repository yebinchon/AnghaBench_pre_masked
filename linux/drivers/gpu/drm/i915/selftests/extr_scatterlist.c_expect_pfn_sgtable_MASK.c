
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rnd_state {int dummy; } ;
struct pfn_table {int dummy; } ;
typedef int npages_fn_t ;


 int FUNC_0 (struct pfn_table*,int ,struct rnd_state*,char const*,unsigned long) ;
 int FUNC_1 (struct pfn_table*,char const*,unsigned long) ;
 int FUNC_2 (struct pfn_table*,char const*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct pfn_table *VAR_0,
         npages_fn_t VAR_1,
         struct rnd_state *VAR_2,
         const char *VAR_3,
         unsigned long VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_0, VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 return 0;
}
