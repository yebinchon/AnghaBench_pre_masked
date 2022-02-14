
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct hlist_head {int dummy; } ;
struct cached_dev {struct hlist_head* io_hash; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ,int ) ;

__attribute__((used)) static struct hlist_head *FUNC_1(struct cached_dev *VAR_1, uint64_t VAR_2)
{
 return &VAR_1->io_hash[FUNC_0(VAR_2, VAR_0)];
}
