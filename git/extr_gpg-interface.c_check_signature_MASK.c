
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; } ;
struct signature_check {char result; void* gpg_status; void* gpg_output; int payload; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct signature_check*) ;
 void* FUNC_1 (struct strbuf*,int *) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (char const*,size_t,char const*,size_t,struct strbuf*,struct strbuf*) ;
 int FUNC_4 (char const*,size_t) ;

int FUNC_5(const char *VAR_1, size_t VAR_2, const char *VAR_3,
 size_t VAR_4, struct signature_check *VAR_5)
{
 struct strbuf VAR_6 = VAR_0;
 struct strbuf VAR_7 = VAR_0;
 int VAR_8;

 VAR_5->result = 'N';

 VAR_8 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4,
          &VAR_6, &VAR_7);
 if (VAR_8 && !VAR_6.len)
  goto out;
 VAR_5->payload = FUNC_4(VAR_1, VAR_2);
 VAR_5->gpg_output = FUNC_1(&VAR_6, ((void*)0));
 VAR_5->gpg_status = FUNC_1(&VAR_7, ((void*)0));
 FUNC_0(VAR_5);
 VAR_8 |= VAR_5->result != 'G' && VAR_5->result != 'U';

 out:
 FUNC_2(&VAR_7);
 FUNC_2(&VAR_6);

 return !!VAR_8;
}
