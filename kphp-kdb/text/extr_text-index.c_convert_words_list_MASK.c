
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long long) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2 (unsigned long long *VAR_0, int VAR_1, int VAR_2) {
  if (VAR_1 <= 0) {
    return;
  }
  int VAR_3 = (VAR_1 - 1) >> 1;
  unsigned long long VAR_4 = ((VAR_2 & 1) && !VAR_3 ? -1LL : VAR_0[VAR_3] ^ VAR_0[VAR_3-1]);
  unsigned long long VAR_5 = ((VAR_2 & 2) && VAR_1 == 1 ? -1LL : VAR_0[VAR_3] ^ VAR_0[VAR_3+1]);
  int VAR_6 = FUNC_0 (VAR_4 < VAR_5 ? VAR_4 : VAR_5) + 1;
  int VAR_7 = FUNC_0 (VAR_0[-1] ^ VAR_0[VAR_1]);






  FUNC_2 (VAR_0, VAR_3, VAR_2 & 1);
  FUNC_2 (VAR_0 + VAR_3 + 1, VAR_1 - VAR_3 - 1, VAR_2 & 2);

  FUNC_1 (VAR_6 >= VAR_7 && VAR_6 <= VAR_7 + 58);

  VAR_0[VAR_3] &= (-1LL << (64 - VAR_6));
  VAR_0[VAR_3] <<= VAR_7;
  VAR_0[VAR_3] |= VAR_6 - VAR_7;
}
