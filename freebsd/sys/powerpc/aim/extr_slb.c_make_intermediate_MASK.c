
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {struct slbtnode** ua_child; } ;
struct slbtnode {int ua_level; scalar_t__ ua_base; int ua_alloc; TYPE_1__ u; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int) ;
 int VAR_2 ;
 struct slbtnode* FUNC_5 (int ,int) ;

__attribute__((used)) static struct slbtnode*
FUNC_6(uint64_t VAR_3, struct slbtnode *VAR_4)
{
 struct slbtnode *VAR_5, *VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_2(VAR_3, VAR_4->ua_level);
 VAR_5 = VAR_4->u.ua_child[VAR_7];
 FUNC_0(FUNC_1(VAR_3, VAR_5->ua_level) != VAR_5->ua_base,
     ("No need for an intermediate node?"));






 VAR_8 = VAR_5->ua_level + 1;
 while (FUNC_1(VAR_3, VAR_8) !=
     FUNC_1(VAR_5->ua_base, VAR_8))
  VAR_8++;
 FUNC_0(VAR_8 < VAR_4->ua_level,
     ("Found splitting level %d for %09jx and %09jx, "
     "but it's the same as %p's",
     VAR_8, VAR_3, VAR_5->ua_base, VAR_4));


 VAR_6 = FUNC_5(VAR_2, VAR_0 | VAR_1);
 FUNC_0(VAR_6 != ((void*)0), ("unhandled NULL case"));


 VAR_6->ua_level = VAR_8;
 VAR_6->ua_base = FUNC_1(VAR_3, VAR_6->ua_level);
 VAR_7 = FUNC_2(VAR_5->ua_base, VAR_6->ua_level);
 VAR_6->u.ua_child[VAR_7] = VAR_5;
 FUNC_4(&VAR_6->ua_alloc, VAR_7);
 FUNC_3();


 VAR_7 = FUNC_2(VAR_6->ua_base, VAR_4->ua_level);
 VAR_4->u.ua_child[VAR_7] = VAR_6;
 FUNC_4(&VAR_4->ua_alloc, VAR_7);

 return (VAR_6);
}
