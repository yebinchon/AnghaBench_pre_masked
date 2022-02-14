
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_state {scalar_t__ status; int completion; } ;
struct fw_priv {struct fw_state fw_st; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 long FUNC_0 (int *,long) ;

__attribute__((used)) static inline int FUNC_1(struct fw_priv *VAR_3, long VAR_4)
{
 struct fw_state *VAR_5 = &VAR_3->fw_st;
 long VAR_6;

 VAR_6 = FUNC_0(&VAR_5->completion, VAR_4);
 if (VAR_6 != 0 && VAR_5->status == VAR_2)
  return -VAR_0;
 if (!VAR_6)
  return -VAR_1;

 return VAR_6 < 0 ? VAR_6 : 0;
}
