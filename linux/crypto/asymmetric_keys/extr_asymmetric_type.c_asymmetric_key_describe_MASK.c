
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct key {char* description; } ;
struct asymmetric_key_subtype {int (* describe ) (struct key const*,struct seq_file*) ;} ;
struct asymmetric_key_ids {struct asymmetric_key_id** id; } ;
struct asymmetric_key_id {int len; unsigned char* data; } ;


 struct asymmetric_key_ids* FUNC_0 (struct key const*) ;
 struct asymmetric_key_subtype* FUNC_1 (struct key const*) ;
 int FUNC_2 (struct seq_file*,char*,int,unsigned char const*) ;
 int FUNC_3 (struct seq_file*,char) ;
 int FUNC_4 (struct seq_file*,char*) ;
 int FUNC_5 (struct key const*,struct seq_file*) ;

__attribute__((used)) static void FUNC_6(const struct key *VAR_0, struct seq_file *VAR_1)
{
 const struct asymmetric_key_subtype *VAR_2 = FUNC_1(VAR_0);
 const struct asymmetric_key_ids *VAR_3 = FUNC_0(VAR_0);
 const struct asymmetric_key_id *VAR_4;
 const unsigned char *VAR_5;
 int VAR_6;

 FUNC_4(VAR_1, VAR_0->description);

 if (VAR_2) {
  FUNC_4(VAR_1, ": ");
  VAR_2->describe(VAR_0, VAR_1);

  if (VAR_3 && VAR_3->id[1]) {
   VAR_4 = VAR_3->id[1];
   FUNC_3(VAR_1, ' ');
   VAR_6 = VAR_4->len;
   VAR_5 = VAR_4->data;
   if (VAR_6 > 4) {
    VAR_5 += VAR_6 - 4;
    VAR_6 = 4;
   }
   FUNC_2(VAR_1, "%*phN", VAR_6, VAR_5);
  }

  FUNC_4(VAR_1, " [");

  FUNC_3(VAR_1, ']');
 }
}
