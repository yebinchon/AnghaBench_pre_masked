
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct config_store_data {int dummy; } ;
typedef int ssize_t ;


 struct strbuf FUNC_0 (char const*,struct config_store_data const*) ;
 int FUNC_1 (struct strbuf*) ;
 int FUNC_2 (int,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_3(int VAR_0, const char *VAR_1,
        const struct config_store_data *VAR_2)
{
 struct strbuf VAR_3 = FUNC_0(VAR_1, VAR_2);
 ssize_t VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_3.buf, VAR_3.len);
 FUNC_1(&VAR_3);

 return VAR_4;
}
