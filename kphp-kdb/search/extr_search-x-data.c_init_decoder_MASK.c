
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct searchx_list_decoder {int remaining; int len; int dec; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int) ;
 long long VAR_4 ;
 long long VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (long long*,void const*,int) ;
 long long VAR_7 ;
 int FUNC_2 (int,int,unsigned char*,int ,int ) ;

__attribute__((used)) static void FUNC_3 (struct searchx_list_decoder *VAR_8, int VAR_9, int VAR_10, int VAR_11, const void *VAR_12) {
  unsigned char *VAR_13;
  if (VAR_11 <= 8) {
    VAR_13 = (unsigned char *) VAR_12;
  } else {
    long long VAR_14;
    FUNC_1 (&VAR_14, VAR_12, 8);
    FUNC_0 (VAR_14 >= VAR_7 && VAR_14 < VAR_5);
    FUNC_0 (VAR_14 + VAR_11 <= VAR_5);
    VAR_14 -= VAR_7;
    FUNC_0 (VAR_14 >= 0 && VAR_14 < VAR_4 && VAR_14 + VAR_11 <= VAR_4);
    VAR_13 = (unsigned char *)(VAR_0 + VAR_14);
  }
  FUNC_0 (VAR_2 < 2 * VAR_1);
  VAR_8->dec = VAR_3[VAR_2++] = FUNC_2 (VAR_9, VAR_10, VAR_13, VAR_6, 0);
  VAR_8->remaining = VAR_10;
  VAR_8->len = VAR_10;
}
