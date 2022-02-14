
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct entry {struct commit* commit; } ;
struct data {int non_common_revs; int rev_list; } ;
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct entry*) ;
 struct entry* FUNC_1 (int,int) ;

__attribute__((used)) static struct entry *FUNC_2(struct data *VAR_2, struct commit *VAR_3, int VAR_4)
{
 struct entry *VAR_5;
 VAR_3->object.flags |= VAR_4 | VAR_1;

 VAR_5 = FUNC_1(1, sizeof(*VAR_5));
 VAR_5->commit = VAR_3;
 FUNC_0(&VAR_2->rev_list, VAR_5);

 if (!(VAR_4 & VAR_0))
  VAR_2->non_common_revs++;
 return VAR_5;
}
