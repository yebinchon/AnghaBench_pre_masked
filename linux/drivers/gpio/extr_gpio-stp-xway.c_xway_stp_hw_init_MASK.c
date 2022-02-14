
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xway_stp {int edge; int groups; int dsl; int phy1; int phy2; int reserved; int virt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int,int,int ) ;

__attribute__((used)) static void FUNC_2(struct xway_stp *VAR_15)
{

 FUNC_0(VAR_15->virt, 0, VAR_2);
 FUNC_0(VAR_15->virt, 0, VAR_6);
 FUNC_0(VAR_15->virt, 0, VAR_7);
 FUNC_0(VAR_15->virt, VAR_5, VAR_3);
 FUNC_0(VAR_15->virt, 0, VAR_4);


 FUNC_1(VAR_15->virt, VAR_8,
    VAR_15->edge, VAR_3);


 FUNC_1(VAR_15->virt, VAR_9,
    VAR_15->groups, VAR_4);


 FUNC_1(VAR_15->virt,
   VAR_0 << VAR_1,
   VAR_15->dsl << VAR_1,
   VAR_3);


 FUNC_1(VAR_15->virt,
   VAR_12 << VAR_10,
   VAR_15->phy1 << VAR_10,
   VAR_3);
 FUNC_1(VAR_15->virt,
   VAR_12 << VAR_11,
   VAR_15->phy2 << VAR_11,
   VAR_4);


 VAR_15->reserved = (VAR_15->phy2 << 5) | (VAR_15->phy1 << 2) | VAR_15->dsl;





 if (VAR_15->reserved)
  FUNC_1(VAR_15->virt, VAR_14,
   VAR_13, VAR_4);
}
