
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_odb_stream ;
struct TYPE_2__ {scalar_t__ written; scalar_t__ size; scalar_t__ buffer; } ;
typedef TYPE_1__ fake_wstream ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,char const*,size_t) ;

__attribute__((used)) static int FUNC_2(git_odb_stream *VAR_0, const char *VAR_1, size_t VAR_2)
{
 fake_wstream *VAR_3 = (fake_wstream *)VAR_0;

 FUNC_0(VAR_3->written + VAR_2 <= VAR_3->size);

 FUNC_1(VAR_3->buffer + VAR_3->written, VAR_1, VAR_2);
 VAR_3->written += VAR_2;
 return 0;
}
