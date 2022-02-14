
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pstore_record {int * buf; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pstore_record*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct pstore_record *VAR_4)
{
 ssize_t VAR_5;

 VAR_4->buf = FUNC_4(VAR_0, VAR_3);
 if (!VAR_4->buf)
  return -VAR_2;

 if (FUNC_1()) {
  VAR_5 = -VAR_1;
  goto out;
 }
 VAR_5 = FUNC_0(VAR_4);
 FUNC_2();

out:
 if (VAR_5 <= 0) {
  FUNC_3(VAR_4->buf);
  VAR_4->buf = ((void*)0);
 }
 return VAR_5;
}
