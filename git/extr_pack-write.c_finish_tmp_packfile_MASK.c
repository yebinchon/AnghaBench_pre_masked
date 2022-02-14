
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct strbuf {int len; int buf; } ;
struct pack_idx_option {int dummy; } ;
struct pack_idx_entry {int dummy; } ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (unsigned char*) ;
 scalar_t__ FUNC_4 (char const*,int ) ;
 int FUNC_5 (struct strbuf*,char*,int ) ;
 int FUNC_6 (struct strbuf*,int) ;
 char* FUNC_7 (int *,struct pack_idx_entry**,int ,struct pack_idx_option*,unsigned char*) ;

void FUNC_8(struct strbuf *VAR_0,
    const char *VAR_1,
    struct pack_idx_entry **VAR_2,
    uint32_t VAR_3,
    struct pack_idx_option *VAR_4,
    unsigned char VAR_5[])
{
 const char *VAR_6;
 int VAR_7 = VAR_0->len;

 if (FUNC_0(VAR_1))
  FUNC_1("unable to make temporary pack file readable");

 VAR_6 = FUNC_7(((void*)0), VAR_2, VAR_3,
          VAR_4, VAR_5);
 if (FUNC_0(VAR_6))
  FUNC_1("unable to make temporary index file readable");

 FUNC_5(VAR_0, "%s.pack", FUNC_3(VAR_5));

 if (FUNC_4(VAR_1, VAR_0->buf))
  FUNC_1("unable to rename temporary pack file");

 FUNC_6(VAR_0, VAR_7);

 FUNC_5(VAR_0, "%s.idx", FUNC_3(VAR_5));
 if (FUNC_4(VAR_6, VAR_0->buf))
  FUNC_1("unable to rename temporary index file");

 FUNC_6(VAR_0, VAR_7);

 FUNC_2((void *)VAR_6);
}
