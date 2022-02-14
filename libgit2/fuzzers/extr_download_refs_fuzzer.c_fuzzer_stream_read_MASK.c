
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuzzer_stream {size_t endp; size_t readp; } ;
typedef int git_smart_subtransport_stream ;


 int FUNC_0 (char*,size_t,size_t) ;

__attribute__((used)) static int FUNC_1(git_smart_subtransport_stream *VAR_0,
 char *VAR_1,
 size_t VAR_2,
 size_t *VAR_3)
{
 struct fuzzer_stream *VAR_4 = (struct fuzzer_stream *) VAR_0;
 size_t VAR_5 = VAR_4->endp - VAR_4->readp;

 *VAR_3 = (VAR_2 > VAR_5) ? VAR_5 : VAR_2;
 FUNC_0(VAR_1, VAR_4->readp, *VAR_3);
 VAR_4->readp += *VAR_3;

 return 0;
}
