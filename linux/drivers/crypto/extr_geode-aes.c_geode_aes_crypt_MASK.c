
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct geode_aes_op {scalar_t__ len; scalar_t__ dir; scalar_t__ mode; int flags; int iv; int dst; int src; int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,scalar_t__,int) ;
 int VAR_10 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static unsigned int
FUNC_6(struct geode_aes_op *VAR_11)
{
 u32 VAR_12 = 0;
 unsigned long VAR_13;
 int VAR_14;

 if (VAR_11->len == 0)
  return 0;






 VAR_12 |= (VAR_1 | VAR_3);

 if (VAR_11->dir == VAR_5)
  VAR_12 |= VAR_2;



 FUNC_4(&VAR_10, VAR_13);

 if (VAR_11->mode == VAR_7) {
  VAR_12 |= VAR_0;
  FUNC_2(VAR_8, VAR_11->iv);
 }

 if (!(VAR_11->flags & VAR_6)) {
  VAR_12 |= VAR_4;
  FUNC_2(VAR_9, VAR_11->key);
 }

 VAR_14 = FUNC_3(VAR_11->src, VAR_11->dst, VAR_11->len, VAR_12);
 FUNC_0(VAR_14);

 if (VAR_11->mode == VAR_7)
  FUNC_1(VAR_8, VAR_11->iv);

 FUNC_5(&VAR_10, VAR_13);

 return VAR_11->len;
}
