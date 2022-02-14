
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct diff_data {int new_binary_type; int new_binary_inflatedlen; int new_binary_base85; int old_binary_type; int old_binary_inflatedlen; int old_binary_base85; } ;
typedef int git_diff_delta ;
struct TYPE_6__ {int type; int inflatedlen; int datalen; int data; } ;
struct TYPE_5__ {int type; int inflatedlen; int datalen; int data; } ;
struct TYPE_7__ {TYPE_2__ new_file; TYPE_1__ old_file; } ;
typedef TYPE_3__ git_diff_binary ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(
 const git_diff_delta *VAR_0,
 const git_diff_binary *VAR_1,
 void *VAR_2)
{
 struct diff_data *VAR_3 = VAR_2;

 FUNC_0(VAR_0);

 FUNC_1(&VAR_3->old_binary_base85,
  VAR_1->old_file.data, VAR_1->old_file.datalen);
 VAR_3->old_binary_inflatedlen = VAR_1->old_file.inflatedlen;
 VAR_3->old_binary_type = VAR_1->old_file.type;

 FUNC_1(&VAR_3->new_binary_base85,
  VAR_1->new_file.data, VAR_1->new_file.datalen);
 VAR_3->new_binary_inflatedlen = VAR_1->new_file.inflatedlen;
 VAR_3->new_binary_type = VAR_1->new_file.type;

 return 0;
}
