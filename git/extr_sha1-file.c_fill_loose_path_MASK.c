
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct object_id {unsigned int* hash; } ;
struct TYPE_2__ {int rawsz; } ;


 int FUNC_0 (struct strbuf*,char) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct strbuf *VAR_1, const struct object_id *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0->rawsz; VAR_3++) {
  static char VAR_4[] = "0123456789abcdef";
  unsigned int VAR_5 = VAR_2->hash[VAR_3];
  FUNC_0(VAR_1, VAR_4[VAR_5 >> 4]);
  FUNC_0(VAR_1, VAR_4[VAR_5 & 0xf]);
  if (!VAR_3)
   FUNC_0(VAR_1, '/');
 }
}
