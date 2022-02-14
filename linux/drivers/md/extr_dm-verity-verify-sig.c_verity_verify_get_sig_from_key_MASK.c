
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_key_payload {int data; int datalen; } ;
struct key {int sem; } ;
struct dm_verity_sig_opts {int sig_size; int sig; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct key*) ;
 int FUNC_1 (struct key*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct key*) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 struct key* FUNC_6 (int *,char const*,int *) ;
 int FUNC_7 (int *) ;
 struct user_key_payload* FUNC_8 (struct key*) ;

__attribute__((used)) static int FUNC_9(const char *VAR_4,
     struct dm_verity_sig_opts *VAR_5)
{
 struct key *VAR_6;
 const struct user_key_payload *VAR_7;
 int VAR_8 = 0;

 VAR_6 = FUNC_6(&VAR_3,
   VAR_4, ((void*)0));
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 FUNC_2(&VAR_6->sem);

 VAR_7 = FUNC_8(VAR_6);
 if (!VAR_7) {
  VAR_8 = -VAR_0;
  goto end;
 }

 VAR_5->sig = FUNC_4(VAR_7->datalen, VAR_2);
 if (!VAR_5->sig) {
  VAR_8 = -VAR_1;
  goto end;
 }
 VAR_5->sig_size = VAR_7->datalen;

 FUNC_5(VAR_5->sig, VAR_7->data, VAR_5->sig_size);

end:
 FUNC_7(&VAR_6->sem);
 FUNC_3(VAR_6);

 return VAR_8;
}
