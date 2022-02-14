
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int lgwin; } ;
typedef int MemoryManager ;
typedef int HasherHandle ;
typedef int Command ;
typedef TYPE_1__ BrotliEncoderParams ;
typedef int BrotliDictionary ;


 int FUNC_0 (int *,int,size_t) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int,size_t) ;
 scalar_t__ FUNC_5 (int *,int const*,size_t,size_t,int const*,size_t,TYPE_1__ const*,size_t const,int*,int ,int) ;
 int FUNC_6 (size_t,size_t,size_t const,int,int*,size_t*,TYPE_1__ const*,int *,size_t*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_7(
    MemoryManager* VAR_2, const BrotliDictionary* VAR_3, size_t VAR_4,
    size_t VAR_5, const uint8_t* VAR_6, size_t VAR_7,
    const BrotliEncoderParams* VAR_8, HasherHandle VAR_9, int* VAR_10,
    size_t* VAR_11, Command* VAR_12, size_t* VAR_13,
    size_t* VAR_14) {
  const size_t VAR_15 = FUNC_3(VAR_8->lgwin);
  VAR_0* VAR_1;
  VAR_1 = FUNC_0(VAR_2, VAR_0, VAR_4 + 1);
  if (FUNC_2(VAR_2)) return;
  FUNC_4(VAR_1, VAR_4 + 1);
  *VAR_13 += FUNC_5(VAR_2, VAR_3, VAR_4,
      VAR_5, VAR_6, VAR_7, VAR_8, VAR_15,
      VAR_10, VAR_9, VAR_1);
  if (FUNC_2(VAR_2)) return;
  FUNC_6(VAR_4, VAR_5, VAR_15, VAR_1,
      VAR_10, VAR_11, VAR_8, VAR_12, VAR_14);
  FUNC_1(VAR_2, VAR_1);
}
