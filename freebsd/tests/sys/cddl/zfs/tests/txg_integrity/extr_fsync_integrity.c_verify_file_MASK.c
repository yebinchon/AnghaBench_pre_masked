
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int pattern_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const*,int,int*,int*) ;
 int * FUNC_4 (size_t) ;
 int FUNC_5 (int *,int,size_t,scalar_t__) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int,int *,size_t) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_8(int VAR_3, const pattern_t* VAR_4){
  int VAR_5;
  int VAR_6 = 1;
  int VAR_7 = 0;

  for(VAR_5=0; VAR_5 < VAR_0; VAR_5++){
    int VAR_8;
    uint32_t VAR_9, VAR_10;
    FUNC_3(VAR_4, VAR_5, &VAR_9, &VAR_10);
    size_t VAR_11 = VAR_10 - VAR_9;
    uint64_t* VAR_12 = FUNC_4(VAR_11);
    uint64_t* VAR_13 = FUNC_4(VAR_11);
    FUNC_5(VAR_12, VAR_9, VAR_11, VAR_1 - 1);


    if( FUNC_7(VAR_3, VAR_13, VAR_11) <= 0 ){
      FUNC_6("read");
      FUNC_0(1);
    }


    for(VAR_8=0; VAR_8 < VAR_11 / sizeof(uint64_t); VAR_8++){
      int VAR_14 = sizeof(uint64_t) * VAR_8;
      int VAR_15 = VAR_9 + VAR_14;
      if (VAR_6 && (VAR_13[VAR_8] != VAR_12[VAR_8])){
        FUNC_1(VAR_2, "fsync_integrity: miscompare at "
     "chunk %i, chunk offset %x, file offset %x\n",
     VAR_5, VAR_14, VAR_15);
        FUNC_1(VAR_2, "Expected %016x, got %016x\n",
     VAR_12[VAR_8], VAR_13[VAR_8]);
        VAR_7 = 1;
 VAR_6 = 0;
      }
      else if (!VAR_6 && (VAR_13[VAR_8] == VAR_12[VAR_8])) {
       FUNC_1(VAR_2, "fsync_integrity: miscompare ends at "
     "chunk %i, chunk offset %x, file offset %x\n",
     VAR_5, VAR_14, VAR_15);
 VAR_6 = 1;
      }
    }
    FUNC_2(VAR_12);
    FUNC_2(VAR_13);
  }

  return (VAR_7);
}
