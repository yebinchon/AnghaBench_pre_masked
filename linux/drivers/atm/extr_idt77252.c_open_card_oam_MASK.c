
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rx_pool; } ;
struct vc_map {int index; TYPE_1__ rcv; } ;
struct idt77252_dev {int vpibits; int rct_base; int cmd_lock; struct vc_map** vcs; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct idt77252_dev*,int,int) ;
 int FUNC_1 (struct idt77252_dev*,int *) ;
 struct vc_map* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct idt77252_dev*) ;
 int FUNC_7 (struct idt77252_dev*,unsigned long,int) ;
 int FUNC_8 (unsigned long,int ) ;

__attribute__((used)) static int
FUNC_9(struct idt77252_dev *VAR_8)
{
 unsigned long VAR_9;
 unsigned long VAR_10;
 struct vc_map *VAR_11;
 int VAR_12, VAR_13;
 int VAR_14;
 u32 VAR_15;

 for (VAR_12 = 0; VAR_12 < (1 << VAR_8->vpibits); VAR_12++) {
  for (VAR_13 = 3; VAR_13 < 5; VAR_13++) {
   VAR_14 = FUNC_0(VAR_8, VAR_12, VAR_13);

   VAR_11 = FUNC_2(sizeof(struct vc_map), VAR_1);
   if (!VAR_11) {
    FUNC_3("%s: can't alloc vc\n", VAR_8->name);
    return -VAR_0;
   }
   VAR_11->index = VAR_14;
   VAR_8->vcs[VAR_14] = VAR_11;

   FUNC_1(VAR_8, &VAR_11->rcv.rx_pool);

   VAR_15 = VAR_3 |
          VAR_5 |
          VAR_6 |
          VAR_4;

   VAR_10 = VAR_8->rct_base + (VAR_11->index << 2);
   FUNC_7(VAR_8, VAR_10, VAR_15);

   FUNC_4(&VAR_8->cmd_lock, VAR_9);
   FUNC_8(VAR_2 | (VAR_10 << 2),
          VAR_7);
   FUNC_6(VAR_8);
   FUNC_5(&VAR_8->cmd_lock, VAR_9);
  }
 }

 return 0;
}
