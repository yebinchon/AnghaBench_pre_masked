
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct commit_info {scalar_t__ author_time; } ;
struct blame_entry {TYPE_1__* suspect; } ;
struct TYPE_4__ {scalar_t__ hop; char* col; } ;
struct TYPE_3__ {int commit; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct commit_info*,int) ;

__attribute__((used)) static void FUNC_1(struct blame_entry *VAR_2, const char **VAR_3)
{
 int VAR_4 = 0;
 struct commit_info VAR_5;
 FUNC_0(VAR_2->suspect->commit, &VAR_5, 1);

 while (VAR_4 < VAR_1 && VAR_5.author_time > VAR_0[VAR_4].hop)
  VAR_4++;

 *VAR_3 = VAR_0[VAR_4].col;
}
