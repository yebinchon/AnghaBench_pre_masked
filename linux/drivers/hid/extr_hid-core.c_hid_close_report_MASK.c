
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_report_enum {int report_list; struct hid_report** report_id_hash; } ;
struct hid_report {int dummy; } ;
struct hid_device {int status; scalar_t__ maxapplication; scalar_t__ maxcollection; scalar_t__ collection_size; int * collection; scalar_t__ rsize; int * rdesc; struct hid_report_enum* report_enum; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct hid_report*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hid_report_enum*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct hid_device *VAR_3)
{
 unsigned VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  struct hid_report_enum *VAR_6 = VAR_3->report_enum + VAR_4;

  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   struct hid_report *VAR_7 = VAR_6->report_id_hash[VAR_5];
   if (VAR_7)
    FUNC_1(VAR_7);
  }
  FUNC_3(VAR_6, 0, sizeof(*VAR_6));
  FUNC_0(&VAR_6->report_list);
 }

 FUNC_2(VAR_3->rdesc);
 VAR_3->rdesc = ((void*)0);
 VAR_3->rsize = 0;

 FUNC_2(VAR_3->collection);
 VAR_3->collection = ((void*)0);
 VAR_3->collection_size = 0;
 VAR_3->maxcollection = 0;
 VAR_3->maxapplication = 0;

 VAR_3->status &= ~VAR_2;
}
