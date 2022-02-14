
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct fw_device {int max_speed; int node_id; int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int,int ,int,int *,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct fw_device *VAR_4,
      int VAR_5, int VAR_6, u32 *VAR_7)
{
 u64 VAR_8 = (VAR_1 | VAR_0) + VAR_6 * 4;
 int VAR_9, VAR_10;


 FUNC_3();

 for (VAR_9 = 10; VAR_9 < 100; VAR_9 += 10) {
  VAR_10 = FUNC_1(VAR_4->card,
    VAR_3, VAR_4->node_id,
    VAR_5, VAR_4->max_speed, VAR_8, VAR_7, 4);
  if (VAR_10 != VAR_2)
   break;
  FUNC_2(VAR_9);
 }
 FUNC_0(VAR_7);

 return VAR_10;
}
