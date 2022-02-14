
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned short ilen; scalar_t__ start; } ;
typedef TYPE_1__ dns_read_iterator_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,unsigned char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,unsigned char*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,unsigned short) ;

__attribute__((used)) static int FUNC_3 (dns_read_iterator_t *VAR_0, char *VAR_1, char *VAR_2, int VAR_3) {
  for (;;) {
    unsigned char VAR_4;
    if (FUNC_0 (VAR_0, &VAR_4) < 0) {
      return -1;
    }
    if (!VAR_4) {
      break;
    }
    if ((VAR_4 & 0xc0) == 0xc0) {

      unsigned char VAR_5;
      VAR_4 &= 63;
      if (FUNC_0 (VAR_0, &VAR_5) < 0) {
        return -1;
      }
      unsigned short VAR_6 = (VAR_4 & 63) * 256 + VAR_5;
      if (VAR_6 >= VAR_0->ilen) {
        return -1;
      }
      dns_read_iterator_t VAR_7;
      FUNC_2 (&VAR_7, VAR_0->start + VAR_6, VAR_0->ilen - VAR_6);
      if (FUNC_3 (&VAR_7, VAR_1, VAR_2, VAR_3) < 0) {
        return -1;
      }
      return 0;
    }
    if (VAR_4 & 0xc0) {
      return -1;
    }
    int VAR_8 = VAR_4;
    if (!VAR_8) {
      break;
    }
    if (VAR_1 != VAR_2) {
      if (VAR_3 <= 0) {
        return -1;
      }
      VAR_3--;
      *VAR_2++ = '.';
    }
    if (VAR_3 < VAR_8) {
      return -1;
    }
    if (FUNC_1 (VAR_0, VAR_8, (unsigned char *) VAR_2) < 0) {
      return -1;
    }
    VAR_3 -= VAR_8;
    VAR_2 += VAR_8;
  }
  if (VAR_3 <= 0) {
    return -1;
  }
  VAR_3--;
  *VAR_2 = 0;
  return VAR_2 - VAR_1;
}
