
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*,int ) ;
 int FUNC_2 () ;
 char* VAR_0 ;
 unsigned int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_5 (void) {
  unsigned VAR_2 = FUNC_3 ();
  if ((unsigned) FUNC_4() != VAR_2) {
    FUNC_1 (VAR_1, "crc32 mismatch while reading snapshot %s at position %d\n", VAR_0, FUNC_2 ());
    FUNC_0 (0);
  }
}
