
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct its_node {int flags; int device_ids; struct its_baser* tables; } ;
struct its_baser {int val; int psz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct its_node*) ;
 int FUNC_3 (struct its_node*,struct its_baser*,int ,int *,int ) ;
 int FUNC_4 (struct its_node*,struct its_baser*) ;
 int FUNC_5 (struct its_node*,struct its_baser*,int,int,int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct its_node *VAR_9)
{
 u64 VAR_10 = VAR_1;
 u64 VAR_11 = VAR_3;
 u32 VAR_12 = VAR_8;
 int VAR_13, VAR_14;

 if (VAR_9->flags & VAR_6)

  VAR_11 = VAR_5;

 for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) {
  struct its_baser *VAR_15 = VAR_9->tables + VAR_14;
  u64 VAR_16 = FUNC_4(VAR_9, VAR_15);
  u64 VAR_17 = FUNC_0(VAR_16);
  u32 VAR_18 = FUNC_1(VAR_12);
  bool VAR_19 = 0;

  switch (VAR_17) {
  case 129:
   continue;

  case 130:
   VAR_19 = FUNC_3(VAR_9, VAR_15,
           VAR_12, &VAR_18,
           VAR_9->device_ids);
   break;

  case 128:
   VAR_19 = FUNC_3(VAR_9, VAR_15,
           VAR_12, &VAR_18,
           VAR_7);
   break;
  }

  VAR_13 = FUNC_5(VAR_9, VAR_15, VAR_11, VAR_10, VAR_12, VAR_18, VAR_19);
  if (VAR_13 < 0) {
   FUNC_2(VAR_9);
   return VAR_13;
  }


  VAR_12 = VAR_15->psz;
  VAR_11 = VAR_15->val & VAR_0;
  VAR_10 = VAR_15->val & VAR_4;
 }

 return 0;
}
