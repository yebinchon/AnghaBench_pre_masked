
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct TYPE_5__ {unsigned char* next_out; unsigned long avail_out; } ;
typedef TYPE_1__ git_zstream ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (void*,char,int) ;
 int FUNC_2 (struct strbuf*,void*,int) ;
 int FUNC_3 (TYPE_1__*,unsigned char*,unsigned long,void*,unsigned long) ;

__attribute__((used)) static int FUNC_4(git_zstream *VAR_2, unsigned char *VAR_3,
      unsigned long VAR_4, void *VAR_5,
      unsigned long VAR_6, struct strbuf *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_8 < VAR_0)
  return -1;




 if (FUNC_1(VAR_5, '\0', VAR_2->next_out - (unsigned char *)VAR_5))
  return 0;






 FUNC_2(VAR_7, VAR_5, VAR_2->next_out - (unsigned char *)VAR_5);
 VAR_2->next_out = VAR_5;
 VAR_2->avail_out = VAR_6;

 do {
  VAR_8 = FUNC_0(VAR_2, 0);
  FUNC_2(VAR_7, VAR_5, VAR_2->next_out - (unsigned char *)VAR_5);
  if (FUNC_1(VAR_5, '\0', VAR_2->next_out - (unsigned char *)VAR_5))
   return 0;
  VAR_2->next_out = VAR_5;
  VAR_2->avail_out = VAR_6;
 } while (VAR_8 != VAR_1);
 return -1;
}
