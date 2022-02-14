
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,size_t,size_t) ;
 size_t FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2 (void * VAR_1, size_t VAR_2) {

  const u32 VAR_3 = -1 << 22;
  const u32 VAR_4 = -1 << 8;
  const u32 VAR_5 = 0xE0000000;
  u32 VAR_6 = FUNC_1 (VAR_1);
  u32 VAR_7 = VAR_6+VAR_2-1;
  if ((VAR_6 ^ VAR_7) & VAR_3 ||
      (VAR_6 & VAR_4) == VAR_5) {
    FUNC_0 (VAR_0, "check_area failure: [%x,%x] - mail maintainer!",
     VAR_6, VAR_7);
    return -1;
  } else {
    return 0;
  }
}
