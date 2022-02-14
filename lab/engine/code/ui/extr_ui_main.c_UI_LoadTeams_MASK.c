__attribute__((used)) static void FUNC_0( void ) {
 char VAR_0[4096];
 char *VAR_1;
 int VAR_2, VAR_3, VAR_4;

 VAR_4 = FUNC_0( "", "team", VAR_0, 4096 );

 if (VAR_4) {
  VAR_1 = VAR_0;
  for ( VAR_2 = 0; VAR_2 < VAR_4; VAR_2++ ) {
   VAR_3 = strlen( VAR_1 );
   FUNC_0(VAR_1);
   VAR_1 += VAR_3 + 1;
  }
 }

}
