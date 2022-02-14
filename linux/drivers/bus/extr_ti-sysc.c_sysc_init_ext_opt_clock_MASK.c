
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysc {int nr_clocks; char const** clock_roles; } ;


 int VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (struct sysc*,char const*,char const*) ;

__attribute__((used)) static int FUNC_1(struct sysc *VAR_2, const char *VAR_3)
{
 const char *VAR_4;
 int VAR_5, VAR_6;

 if (VAR_2->nr_clocks < VAR_0)
  VAR_6 = VAR_0;
 else
  VAR_6 = VAR_2->nr_clocks;

 if (VAR_3)
  VAR_4 = VAR_3;
 else
  VAR_4 = VAR_1[VAR_6];

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_2->clock_roles[VAR_6] = VAR_4;
 VAR_2->nr_clocks++;

 return 0;
}
