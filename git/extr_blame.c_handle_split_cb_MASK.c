
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct handle_split_cb_data {long tlno; long plno; int split; int parent; int ent; int sb; } ;


 int FUNC_0 (int ,int ,long,long,long,int ,int ) ;

__attribute__((used)) static int FUNC_1(long VAR_0, long VAR_1,
      long VAR_2, long VAR_3, void *VAR_4)
{
 struct handle_split_cb_data *VAR_5 = VAR_4;
 FUNC_0(VAR_5->sb, VAR_5->ent, VAR_5->tlno, VAR_5->plno, VAR_2, VAR_5->parent,
       VAR_5->split);
 VAR_5->plno = VAR_0 + VAR_1;
 VAR_5->tlno = VAR_2 + VAR_3;
 return 0;
}
