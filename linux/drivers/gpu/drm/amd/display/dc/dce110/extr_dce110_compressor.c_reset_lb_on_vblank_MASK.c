
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct dce110_compressor {int offsets; } ;
struct compressor {int ctx; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct dce110_compressor* FUNC_1 (struct compressor*) ;
 int FUNC_2 (char*) ;
 size_t FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_5 (size_t,int,int ,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct compressor *VAR_6, uint32_t VAR_7)
{
 uint32_t VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;
 uint32_t VAR_11 = 0;
 struct dce110_compressor *VAR_12 = FUNC_1(VAR_6);

 VAR_12->offsets = VAR_5[VAR_7];

 VAR_10 = FUNC_3(VAR_6->ctx, FUNC_0(VAR_3));



 if (VAR_10 != FUNC_3(VAR_6->ctx, FUNC_0(VAR_3))) {

  VAR_8 = FUNC_3(VAR_6->ctx, FUNC_0(VAR_4));
  FUNC_5(VAR_8, 3, VAR_0, VAR_0);
  FUNC_5(VAR_8, 1, VAR_0, VAR_1);
  FUNC_4(VAR_6->ctx, FUNC_0(VAR_4), VAR_8);

  VAR_9 = FUNC_3(VAR_6->ctx, FUNC_0(VAR_2));


  for (VAR_11 = 10000; VAR_11 > 0; VAR_11--) {
   if (VAR_9 != FUNC_3(VAR_6->ctx, FUNC_0(VAR_2)))
    break;
   FUNC_6(10);
  }
  if (!VAR_11)
   FUNC_2("Frame count did not increase for 100ms.\n");


  VAR_8 = FUNC_3(VAR_6->ctx, FUNC_0(VAR_4));
  FUNC_5(VAR_8, 2, VAR_0, VAR_0);
  FUNC_5(VAR_8, 0, VAR_0, VAR_1);
  FUNC_4(VAR_6->ctx, FUNC_0(VAR_4), VAR_8);
 }
}
