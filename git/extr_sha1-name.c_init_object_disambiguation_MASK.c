
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct repository {int dummy; } ;
struct TYPE_3__ {unsigned char* hash; } ;
struct disambiguate_state {unsigned char* hex_pfx; int len; struct repository* repo; TYPE_1__ bin_pfx; } ;
struct TYPE_4__ {int hexsz; } ;


 int VAR_0 ;
 int FUNC_0 (struct disambiguate_state*,int ,int) ;
 int FUNC_1 (struct repository*) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static int FUNC_2(struct repository *VAR_2,
          const char *VAR_3, int VAR_4,
          struct disambiguate_state *VAR_5)
{
 int VAR_6;

 if (VAR_4 < VAR_0 || VAR_4 > VAR_1->hexsz)
  return -1;

 FUNC_0(VAR_5, 0, sizeof(*VAR_5));

 for (VAR_6 = 0; VAR_6 < VAR_4 ;VAR_6++) {
  unsigned char VAR_7 = VAR_3[VAR_6];
  unsigned char VAR_8;
  if (VAR_7 >= '0' && VAR_7 <= '9')
   VAR_8 = VAR_7 - '0';
  else if (VAR_7 >= 'a' && VAR_7 <= 'f')
   VAR_8 = VAR_7 - 'a' + 10;
  else if (VAR_7 >= 'A' && VAR_7 <='F') {
   VAR_8 = VAR_7 - 'A' + 10;
   VAR_7 -= 'A' - 'a';
  }
  else
   return -1;
  VAR_5->hex_pfx[VAR_6] = VAR_7;
  if (!(VAR_6 & 1))
   VAR_8 <<= 4;
  VAR_5->bin_pfx.hash[VAR_6 >> 1] |= VAR_8;
 }

 VAR_5->len = VAR_4;
 VAR_5->hex_pfx[VAR_4] = '\0';
 VAR_5->repo = VAR_2;
 FUNC_1(VAR_2);
 return 0;
}
