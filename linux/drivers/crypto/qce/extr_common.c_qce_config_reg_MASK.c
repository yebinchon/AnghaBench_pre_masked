
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qce_device {int burst_size; int pipe_pair_id; } ;


 int FUNC_0 (int ) ;
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

__attribute__((used)) static u32 FUNC_1(struct qce_device *VAR_10, int VAR_11)
{
 u32 VAR_12 = (VAR_10->burst_size >> 3) - 1;
 u32 VAR_13 = VAR_10->pipe_pair_id;
 u32 VAR_14;

 VAR_14 = (VAR_12 << VAR_9) & VAR_8;
 VAR_14 |= FUNC_0(VAR_3) | FUNC_0(VAR_2) |
    FUNC_0(VAR_5) | FUNC_0(VAR_4);
 VAR_14 |= (VAR_13 << VAR_7) & VAR_6;
 VAR_14 &= ~VAR_0;

 if (VAR_11)
  VAR_14 |= FUNC_0(VAR_1);

 return VAR_14;
}
