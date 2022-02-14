
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_shallow_data {int use_pack_protocol; int count; unsigned int flags; struct strbuf* out; } ;
struct strbuf {int dummy; } ;
struct oid_array {int nr; scalar_t__ oid; } ;


 int FUNC_0 (int ,struct write_shallow_data*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct strbuf*,char) ;
 int FUNC_3 (struct strbuf*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct strbuf *VAR_1, int VAR_2,
       const struct oid_array *VAR_3,
       unsigned VAR_4)
{
 struct write_shallow_data VAR_5;
 int VAR_6;
 VAR_5.out = VAR_1;
 VAR_5.use_pack_protocol = VAR_2;
 VAR_5.count = 0;
 VAR_5.flags = VAR_4;
 FUNC_0(VAR_0, &VAR_5);
 if (!VAR_3)
  return VAR_5.count;
 for (VAR_6 = 0; VAR_6 < VAR_3->nr; VAR_6++) {
  FUNC_3(VAR_1, FUNC_1(VAR_3->oid + VAR_6));
  FUNC_2(VAR_1, '\n');
  VAR_5.count++;
 }
 return VAR_5.count;
}
