
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int follower_chunks; } ;
typedef TYPE_1__ pattern_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__ const*,int,int*,int*) ;
 int * FUNC_4 (size_t) ;
 int FUNC_5 (int *,int,size_t,int) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int,int *,size_t) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_8(int VAR_2, const pattern_t* VAR_3){
  int VAR_4;
  int VAR_5 = 1;
  int VAR_6 = 0;

  for(VAR_4=0; VAR_4 < VAR_0; VAR_4++){
    int VAR_7;
    uint32_t VAR_8, VAR_9;
    FUNC_3(VAR_3, VAR_4, &VAR_8, &VAR_9);
    size_t VAR_10 = VAR_9 - VAR_8;
    uint64_t* VAR_11 = FUNC_4(VAR_10);
    uint64_t* VAR_12 = FUNC_4(VAR_10);
    if ((1 << VAR_4) & VAR_3->follower_chunks){
      FUNC_5(VAR_11, VAR_8, VAR_10, 1);
    }
    else{
      FUNC_5(VAR_11, VAR_8, VAR_10, 0);
    }


    if( FUNC_7(VAR_2, VAR_12, VAR_10) <= 0 ){
      FUNC_6("read");
      FUNC_0(1);
    }


    for(VAR_7=0; VAR_7 < VAR_10 / sizeof(uint64_t); VAR_7++){
      int VAR_13 = sizeof(uint64_t) * VAR_7;
      int VAR_14 = VAR_8 + VAR_13;
      if (VAR_5 && (VAR_12[VAR_7] != VAR_11[VAR_7])){
        FUNC_1(VAR_1, "txg_integrity: miscompare at "
     "chunk %i, chunk offset %x, file offset %x\n",
     VAR_4, VAR_13, VAR_14);
        FUNC_1(VAR_1, "Expected %16x, got %16x\n",
     VAR_11[VAR_7], VAR_12[VAR_7]);
        VAR_6 = 1;
 VAR_5 = 0;
      }
      else if (!VAR_5 && (VAR_12[VAR_7] == VAR_11[VAR_7])) {
       FUNC_1(VAR_1, "txg_integrity: miscompare ends at "
     "chunk %i, chunk offset %x, file offset %x\n",
     VAR_4, VAR_13, VAR_14);
 VAR_5 = 1;
      }
    }
    FUNC_2(VAR_11);
    FUNC_2(VAR_12);
  }

  return (VAR_6);
}
