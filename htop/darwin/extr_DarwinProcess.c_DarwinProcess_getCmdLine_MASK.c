
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int p_pid; char* p_comm; } ;
struct kinfo_proc {TYPE_1__ kp_proc; } ;
typedef int nargs ;
typedef int argmax ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int*,char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int*,int,...) ;
 scalar_t__ FUNC_4 (int) ;
 char* FUNC_5 (char*) ;

char *FUNC_6(struct kinfo_proc* VAR_3, int* VAR_4) {

   int VAR_5[3], VAR_6, VAR_7, VAR_8 = 0;
   size_t VAR_9;
   char *VAR_10, *VAR_11, *VAR_12, *VAR_13, *VAR_14;


   VAR_5[0] = VAR_0;
   VAR_5[1] = VAR_1;

   VAR_9 = sizeof( VAR_6 );
   if ( FUNC_3( VAR_5, 2, &VAR_6, &VAR_9, ((void*)0), 0 ) == -1 ) {
      goto ERROR_A;
   }


   VAR_10 = ( char * ) FUNC_4( VAR_6 );
   if ( VAR_10 == ((void*)0) ) {
      goto ERROR_A;
   }
   VAR_5[0] = VAR_0;
   VAR_5[1] = VAR_2;
   VAR_5[2] = VAR_3->kp_proc.p_pid;

   VAR_9 = ( size_t ) VAR_6;
   if ( FUNC_3( VAR_5, 3, VAR_10, &VAR_9, ((void*)0), 0 ) == -1 ) {
      goto ERROR_B;
   }

   FUNC_1( &VAR_7, VAR_10, sizeof( VAR_7 ) );
   VAR_13 = VAR_10 + sizeof( VAR_7 );


   for ( ; VAR_13 < &VAR_10[VAR_9]; VAR_13++ ) {
      if ( *VAR_13 == '\0' ) {

         break;
      }
   }
   if ( VAR_13 == &VAR_10[VAR_9] ) {
      goto ERROR_B;
   }


   for ( ; VAR_13 < &VAR_10[VAR_9]; VAR_13++ ) {
      if ( *VAR_13 != '\0' ) {

         break;
      }
   }
   if ( VAR_13 == &VAR_10[VAR_9] ) {
      goto ERROR_B;
   }

   VAR_11 = VAR_13;

   *VAR_4 = 0;
   for ( VAR_12 = ((void*)0); VAR_8 < VAR_7 && VAR_13 < &VAR_10[VAR_9]; VAR_13++ ) {
      if ( *VAR_13 == '\0' ) {
         VAR_8++;
         if ( VAR_12 != ((void*)0) ) {

            *VAR_12 = ' ';
         }

        VAR_12 = VAR_13;
        if (*VAR_4 == 0) {
           *VAR_4 = VAR_13 - VAR_11;
        }
     }
   }





   if ( VAR_12 == ((void*)0) || VAR_12 == VAR_11 ) {

      goto ERROR_B;
   }
   if (*VAR_4 == 0) {
      *VAR_4 = VAR_12 - VAR_11;
   }


   VAR_14 = FUNC_5(VAR_11);


   FUNC_0( VAR_10 );

   return VAR_14;

ERROR_B:
   FUNC_0( VAR_10 );
ERROR_A:
   VAR_14 = FUNC_5(VAR_3->kp_proc.p_comm);
   *VAR_4 = FUNC_2(VAR_14);

   return VAR_14;
}
