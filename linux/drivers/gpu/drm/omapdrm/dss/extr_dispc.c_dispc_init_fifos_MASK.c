
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct dispc_device {int* fifo_assignment; TYPE_1__* feat; int * fifo_size; } ;
struct TYPE_2__ {int num_fifos; scalar_t__ has_writeback; scalar_t__ gfx_fifo_workaround; int buffer_size_unit; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int,int) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (struct dispc_device*,int ,int ,int ) ;
 int FUNC_3 (struct dispc_device*) ;
 int FUNC_4 (struct dispc_device*,int ,int *,int *) ;
 int FUNC_5 (struct dispc_device*,size_t,int *,int *,int const,int const) ;
 int FUNC_6 (struct dispc_device*,size_t,int ,int ) ;
 int FUNC_7 (struct dispc_device*,int ) ;
 int FUNC_8 (struct dispc_device*,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct dispc_device *VAR_4)
{
 u32 VAR_5;
 int VAR_6;
 u8 VAR_7, VAR_8;
 u32 VAR_9;
 int VAR_10;

 VAR_9 = VAR_4->feat->buffer_size_unit;

 FUNC_4(VAR_4, VAR_1, &VAR_7, &VAR_8);

 for (VAR_6 = 0; VAR_6 < VAR_4->feat->num_fifos; ++VAR_6) {
  VAR_5 = FUNC_2(VAR_4, FUNC_0(VAR_6),
          VAR_7, VAR_8);
  VAR_5 *= VAR_9;
  VAR_4->fifo_size[VAR_6] = VAR_5;





  VAR_4->fifo_assignment[VAR_6] = VAR_6;
 }
 if (VAR_4->feat->gfx_fifo_workaround) {
  u32 VAR_11;

  VAR_11 = FUNC_7(VAR_4, VAR_0);

  VAR_11 = FUNC_1(VAR_11, 4, 2, 0);
  VAR_11 = FUNC_1(VAR_11, 4, 5, 3);
  VAR_11 = FUNC_1(VAR_11, 0, 26, 24);
  VAR_11 = FUNC_1(VAR_11, 0, 29, 27);

  FUNC_8(VAR_4, VAR_0, VAR_11);

  VAR_4->fifo_assignment[VAR_2] = VAR_3;
  VAR_4->fifo_assignment[VAR_3] = VAR_2;
 }




 for (VAR_10 = 0; VAR_10 < FUNC_3(VAR_4); ++VAR_10) {
  u32 VAR_12, VAR_13;
  const bool VAR_14 = 0;
  const bool VAR_15 = 0;

  FUNC_5(VAR_4, VAR_10, &VAR_12, &VAR_13,
        VAR_14, VAR_15);

  FUNC_6(VAR_4, VAR_10, VAR_12, VAR_13);
 }

 if (VAR_4->feat->has_writeback) {
  u32 VAR_16, VAR_17;
  const bool VAR_18 = 0;
  const bool VAR_19 = 0;

  FUNC_5(VAR_4, VAR_3,
        &VAR_16, &VAR_17, VAR_18,
        VAR_19);

  FUNC_6(VAR_4, VAR_3, VAR_16, VAR_17);
 }
}
