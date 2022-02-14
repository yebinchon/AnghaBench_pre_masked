
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct tr2tls_thread_ctx {int dummy; } ;
struct strbuf {int dummy; } ;
struct repository {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char const*,struct tr2tls_thread_ctx*,char const*,int,struct repository const*,int *,int *,char const*,struct strbuf*) ;
 int FUNC_1 (struct strbuf*,struct strbuf const*) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (int *,struct strbuf*) ;
 int VAR_1 ;
 struct tr2tls_thread_ctx* FUNC_4 () ;

__attribute__((used)) static void FUNC_5(const char *VAR_2, int VAR_3, const char *VAR_4,
        const struct repository *VAR_5,
        uint64_t *VAR_6,
        uint64_t *VAR_7,
        const char *VAR_8,
        const struct strbuf *VAR_9)
{
 struct tr2tls_thread_ctx *VAR_10 = FUNC_4();
 struct strbuf VAR_11 = VAR_0;

 FUNC_0(VAR_4, VAR_10, VAR_2, VAR_3, VAR_5,
    VAR_6, VAR_7, VAR_8,
    &VAR_11);
 FUNC_1(&VAR_11, VAR_9);
 FUNC_3(&VAR_1, &VAR_11);
 FUNC_2(&VAR_11);
}
