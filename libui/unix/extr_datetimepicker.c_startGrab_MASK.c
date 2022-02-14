
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * mouse; int * keyboard; int window; } ;
typedef TYPE_1__ uiprivDateTimePickerWidget ;
typedef int guint32 ;
typedef int gboolean ;
struct TYPE_8__ {scalar_t__ data; } ;
typedef int GdkWindow ;
typedef int GdkDisplay ;
typedef int GdkDeviceManager ;
typedef int GdkDevice ;
typedef TYPE_2__ GList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_10 ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,int ,int ,int,int *,int ) ;
 TYPE_2__* FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int ,int *,int ) ;
 int * FUNC_9 () ;
 int FUNC_10 () ;
 int * FUNC_11 (int ) ;
 int * FUNC_12 (int ) ;

__attribute__((used)) static gboolean FUNC_13(uiprivDateTimePickerWidget *VAR_11)
{
 GdkDevice *VAR_12;
 guint32 VAR_13;
 GdkWindow *VAR_14;
 GdkDevice *VAR_15, *VAR_16;

 VAR_12 = FUNC_9();
 if (VAR_12 == ((void*)0)) {


  GdkDisplay *VAR_17;
  GdkDeviceManager *VAR_18;
  GList *VAR_19;

  VAR_17 = FUNC_11(FUNC_0(VAR_11));
  VAR_18 = FUNC_7(VAR_17);
  VAR_19 = FUNC_5(VAR_18, VAR_3);
  VAR_12 = (GdkDevice *) (VAR_19->data);
  FUNC_1(VAR_19);
 }

 VAR_13 = FUNC_10();
 VAR_15 = VAR_12;
 VAR_16 = FUNC_2(VAR_12);
 if (FUNC_3(VAR_12) != VAR_9) {
  VAR_12 = VAR_16;
  VAR_16 = VAR_15;
  VAR_15 = VAR_12;
 }

 VAR_14 = FUNC_12(VAR_11->window);
 if (VAR_15 != ((void*)0))
  if (FUNC_4(VAR_15, VAR_14,
   VAR_7, VAR_10,
   VAR_5 | VAR_6,
   ((void*)0), VAR_13) != VAR_4)
   return VAR_0;
 if (VAR_16 != ((void*)0))
  if (FUNC_4(VAR_16, VAR_14,
   VAR_7, VAR_10,
   VAR_1 | VAR_2 | VAR_8,
   ((void*)0), VAR_13) != VAR_4) {
   if (VAR_15 != ((void*)0))
    FUNC_6(VAR_15, VAR_13);
   return VAR_0;
  }

 FUNC_8(VAR_11->window, VAR_16, VAR_10);
 VAR_11->keyboard = VAR_15;
 VAR_11->mouse = VAR_16;
 return VAR_10;
}
