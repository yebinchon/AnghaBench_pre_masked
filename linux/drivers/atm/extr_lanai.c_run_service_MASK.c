
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int* start; int const* ptr; int const* end; } ;
struct lanai_dev {int transmit_ready; TYPE_1__ service; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct lanai_dev*,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct lanai_dev*,int ) ;
 int FUNC_6 (struct lanai_dev*,int,int ) ;
 int VAR_4 ;
 int FUNC_7 (struct lanai_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct lanai_dev *VAR_5)
{
 int VAR_6 = 0;
 u32 VAR_7 = FUNC_5(VAR_5, VAR_2);
 const u32 *VAR_8 = VAR_5->service.start + VAR_7;
 while (VAR_5->service.ptr != VAR_8) {
  VAR_6 += FUNC_1(VAR_5,
      FUNC_2(VAR_5->service.ptr++));
  if (VAR_5->service.ptr >= VAR_5->service.end)
   VAR_5->service.ptr = VAR_5->service.start;
 }
 FUNC_6(VAR_5, VAR_7, VAR_1);
 if (VAR_6 != 0) {
  FUNC_3(&VAR_4);
  FUNC_7(VAR_5, VAR_5->transmit_ready,
      VAR_3);
  FUNC_0(VAR_5->transmit_ready, VAR_0);
  FUNC_4(&VAR_4);
 }
}
