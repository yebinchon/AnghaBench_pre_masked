
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shallow_info {int dummy; } ;
struct async {int in; int proc; } ;
typedef int muxer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct async*) ;
 int FUNC_1 (struct async*,int ,int) ;
 scalar_t__ FUNC_2 (struct async*) ;
 char const* FUNC_3 (int,struct shallow_info*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static const char *FUNC_4(struct shallow_info *VAR_4)
{
 struct async VAR_5;
 const char *VAR_6;

 if (!VAR_3)
  return FUNC_3(0, VAR_4);

 VAR_2 = VAR_0;
 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.proc = VAR_1;
 VAR_5.in = -1;
 if (FUNC_2(&VAR_5))
  return ((void*)0);

 VAR_6 = FUNC_3(VAR_5.in, VAR_4);

 FUNC_0(&VAR_5);
 return VAR_6;
}
