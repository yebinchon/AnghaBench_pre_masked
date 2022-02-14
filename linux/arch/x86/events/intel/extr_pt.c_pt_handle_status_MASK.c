
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pt_buffer {scalar_t__ output_off; int snapshot; } ;
struct pt {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,int ,scalar_t__) ;
 int FUNC_2 (int *,int ) ;
 struct pt_buffer* FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct pt_buffer*) ;
 void* FUNC_6 (struct pt_buffer*) ;
 scalar_t__ FUNC_7 (struct pt_buffer*) ;
 int FUNC_8 (struct pt_buffer*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static void FUNC_11(struct pt *VAR_6)
{
 struct pt_buffer *VAR_7 = FUNC_3(&VAR_6->handle);
 int VAR_8 = 0;
 u64 VAR_9;

 FUNC_9(VAR_0, VAR_9);

 if (VAR_9 & VAR_3) {
  FUNC_4("ToPA ERROR encountered, trying to recover\n");
  FUNC_8(VAR_7);
  VAR_9 &= ~VAR_3;
 }

 if (VAR_9 & VAR_4) {
  VAR_9 &= ~VAR_4;






  if (!FUNC_0(VAR_2) ||
      VAR_7->output_off == FUNC_7(VAR_7)) {
   FUNC_2(&VAR_6->handle,
                        VAR_1);
   VAR_8++;
  }
 }





 if (!FUNC_0(VAR_2) &&
     !VAR_7->snapshot &&
     FUNC_7(VAR_7) - VAR_7->output_off <= VAR_5) {
  void *VAR_10 = FUNC_6(VAR_7);


  FUNC_1(VAR_10 + VAR_7->output_off, 0,
         FUNC_7(VAR_7) -
         VAR_7->output_off);
  VAR_8++;
 }

 if (VAR_8)
  FUNC_5(VAR_7);

 FUNC_10(VAR_0, VAR_9);
}
